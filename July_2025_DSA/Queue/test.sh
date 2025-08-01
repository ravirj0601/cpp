cat <<EOF > ~/.tmux.conf
set -g prefix C-a
unbind C-b
bind C-a send-prefix
bind - split-window -v
bind | split-window -h
bind -n M-Left select-pane -L
bind -n M-Right select-pane -R
bind -n M-Up select-pane -U
bind -n M-Down select-pane -D
set -g mouse on
EOF
